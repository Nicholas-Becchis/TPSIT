function su(){ 
    var comandi = document.getElementById("comandi");
    comandi.innerHTML='<table id="tblComandi">'+
    '<tr><td></td><td><input type="image" value="value_su" src="../static/img/freccia_su copia.gif" width="150" height="150" name="action_su" onclick="su();"></td><td></td></tr>'+

    '<tr><td><input type="image" value="value_sx" src="../static/img/freccia_sx.png" width="150" height="150" name="action_sx" onclick="sx();"></td><td><input type="image" value="value_stop" src="../static/img/stop.png" width="150" height="150" name="action_stop" onclick="stop();"></td><td><input type="image" value="value_dx" src="../static/img/freccia_dx.png" width="150" height="150" name="action_dx" onclick="dx();"></td><td><font class="CMD" face="Times New Roman" color="blue" style="font-size: 20px;">INSERIRE IL COMANDO DESIDERATO</font><input class="CMD" type="text" name="Comandi"><input type="button" value="ESEGUI COMANDO" style="margin-left: 15px; color: whitesmoke; background-color:blue"></td></tr>'+

    '<tr><td></td><td><input type="image" value="value_giu" src="../static/img/freccia_in_giu.png" width="150" height="150" name="action_giu" onclick="giu();"></td><td></td></tr>'+
    '</table>';

    var xhr = new XMLHttpRequest();
    xhr.open("POST", "/", true);
    xhr.setRequestHeader('Content-Type', 'application/json');
    xhr.send(JSON.stringify({
        value: "value_su"
    }));

    return;
}

function sx(){ 
    var comandi = document.getElementById("comandi");
    comandi.innerHTML='<table id="tblComandi">'+
    '<tr><td></td><td><input type="image" value="value_su" src="../static/img/freccia_in_su.png" width="150" height="150" name="action_su" onclick="su();"></td><td></td><td></td><td></td></tr>'+

    '<tr><td><input type="image" value="value_sx" src="../static/img/freccia_sx copia.gif" width="150" height="150" name="action_sx" onclick="sx();"></td><td><input type="image" value="value_stop" src="../static/img/stop.png" width="150" height="150" name="action_stop" onclick="stop();"></td><td><input type="image" value="value_dx" src="../static/img/freccia_dx.png" width="150" height="150" name="action_dx" onclick="dx();"></td><td><font class="CMD" face="Times New Roman" color="blue" style="font-size: 20px;">INSERIRE IL COMANDO DESIDERATO</font><input class="CMD" type="text" name="Comandi"><input type="button" value="ESEGUI COMANDO" style="margin-left: 15px; color: whitesmoke; background-color:blue"></td></tr>'+

    '<tr><td></td><td><input type="image" value="value_giu" src="../static/img/freccia_in_giu.png" width="150" height="150" name="action_giu" onclick="giu();"></td><td></td><td></td><td></td></tr>'+
    '</table>';

    var xhr = new XMLHttpRequest();
    xhr.open("POST", "/", true);
    xhr.setRequestHeader('Content-Type', 'application/json');
    xhr.send(JSON.stringify({
        value: "value_sx"
    }));

    return;
}

function dx(){    
    var comandi = document.getElementById("comandi");
    comandi.innerHTML='<table id="tblComandi">'+
    '<tr><td></td><td><input type="image" value="value_su" src="../static/img/freccia_in_su.png" width="150" height="150" name="action_su" onclick="su();"></td><td></td><td></td><td></td></tr>'+

    '<tr><td><input type="image" value="value_sx" src="../static/img/freccia_sx.png" width="150" height="150" name="action_sx" onclick="sx();"></td><td><input type="image" value="value_stop" src="../static/img/stop.png" width="150" height="150" name="action_stop" onclick="stop();"></td><td><input type="image" value="value_dx" src="../static/img/freccia_dx copia.gif" width="150" height="150" name="action_dx" onclick="dx();"></td><td><font class="CMD" face="Times New Roman" color="blue" style="font-size: 20px;">INSERIRE IL COMANDO DESIDERATO</font><input class="CMD" type="text" name="Comandi"><input type="button" value="ESEGUI COMANDO" style="margin-left: 15px; color: whitesmoke; background-color:blue"></td></tr>'+

    '<tr><td></td><td><input type="image" value="value_giu" src="../static/img/freccia_in_giu.png" width="150" height="150" name="action_giu" onclick="giu();"></td><td></td><td></td><td></td></tr>'+
    '</table>';

    var xhr = new XMLHttpRequest();
    xhr.open("POST", "/", true);
    xhr.setRequestHeader('Content-Type', 'application/json');
    xhr.send(JSON.stringify({
        value: "value_dx"
    }));

    return;
}

function giu(){  
    var comandi = document.getElementById("comandi");
    comandi.innerHTML='<table id="tblComandi">'+
    '<tr><td></td><td><input type="image" value="value_su" src="../static/img/freccia_in_su.png" width="150" height="150" name="action_su" onclick="su();"></td><td></td><td></td><td></td></tr>'+

    '<tr><td><input type="image" value="value_sx" src="../static/img/freccia_sx.png" width="150" height="150" name="action_sx" onclick="sx();"></td><td><input type="image" value="value_stop" src="../static/img/stop.png" width="150" height="150" name="action_stop" onclick="stop();"></td><td><input type="image" value="value_dx" src="../static/img/freccia_dx.png" width="150" height="150" name="action_dx" onclick="dx();"></td><td><font class="CMD" face="Times New Roman" color="blue" style="font-size: 20px;">INSERIRE IL COMANDO DESIDERATO</font><input class="CMD" type="text" name="Comandi"><input type="button" value="ESEGUI COMANDO" style="margin-left: 15px; color: whitesmoke; background-color:blue"></td></tr>'+

    '<tr><td></td><td><input type="image" value="value_giu" src="../static/img/freccia_giu copia.gif" width="150" height="150" name="action_giu" onclick="giu();"></td><td></td><td></td><td></td></tr>'+
    '</table>';

    var xhr = new XMLHttpRequest();
    xhr.open("POST", "/", true);
    xhr.setRequestHeader('Content-Type', 'application/json');
    xhr.send(JSON.stringify({
        value: "value_giu"
    }));

    return;
}

function stop(){    
    var comandi = document.getElementById("comandi");
    comandi.innerHTML='<table id="tblComandi">'+
    '<tr><td></td><td><input type="image" value="value_su" src="../static/img/freccia_in_su.png" width="150" height="150" name="action_su" onclick="su();"></td><td></td><td></td><td></td></tr>'+

    '<tr><td><input type="image" value="value_sx" src="../static/img/freccia_sx.png" width="150" height="150" name="action_sx" onclick="sx();"></td><td><input type="image" value="value_stop" src="../static/img/stop.png" width="150" height="150" name="action_stop" onclick="stop();"></td><td><input type="image" value="value_dx" src="../static/img/freccia_dx.png" width="150" height="150" name="action_dx" onclick="dx();"></td><td><font class="CMD" face="Times New Roman" color="blue" style="font-size: 20px;">INSERIRE IL COMANDO DESIDERATO</font><input class="CMD" type="text" name="Comandi"><input type="button" value="ESEGUI COMANDO" style="margin-left: 15px; color: whitesmoke; background-color:blue"></td></tr>'+

    '<tr><td></td><td><input type="image" value="value_giu" src="../static/img/freccia_in_giu.png" width="150" height="150" name="action_giu" onclick="giu();"></td><td></td><td></td><td></td></tr>'+
    '</table>';

    var xhr = new XMLHttpRequest();
    xhr.open("POST", "/", true);
    xhr.setRequestHeader('Content-Type', 'application/json');
    xhr.send(JSON.stringify({
        value: "value_stop"
    }));

    return;
}