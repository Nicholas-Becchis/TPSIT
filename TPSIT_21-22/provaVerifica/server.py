# LIBRERIE #
from flask import Flask, render_template, jsonify, request, redirect, url_for
import sqlite3
from sympy import *
#-----------#
# LOGIN #
token = "fbuiefurfbuuf"
#-----------#

def validate(username, password):
    completion = False
    con = sqlite3.connect('./users_&_func.db')
    cur = con.cursor()
    cur.execute("SELECT * FROM Users")
    rows = cur.fetchall()
    for row in rows:
        dbUser = row[0]
        dbPass = row[1]
        if dbUser==username:
            completion=check_password(dbPass, password)
    return completion

def check_password(hashed_password, user_password):
    return hashed_password == user_password

@app.route('/', methods=['GET', 'POST'])
def login():
    error = None
    if request.method == 'POST':
        username_c = request.cookies.get('username')
        username = request.form['username']
        password = request.form['password']
        completion = validate(username, password)
        if completion ==False:
            error = 'Invalid Credentials. Please try again.'
        else:
            if username_c==None:
                resp = make_response(render_template('index.html'))
                resp.set_cookie('username', 'Mario')
                return resp
            save_log_accesso_utente(username)
        return redirect(url_for('index'))
            
    return render_template('loginPage.html', error=error)