const fs = require('fs');
const readline = require('linebyline');
var words = ['auto','double','int','struct','break',
            'else','long','switch','case','enum','register',
            'typedef','char','extern','return','union','const',
            'float','short','unsigned','continue','for','signed',
            'void','default','goto','sizeof','volatile','do',
            'if','static','while'];
var out = [];
function analyzeLine(string,dictionary,lineCount){
    var a = string.split(' ');
    a.forEach(e=>{
        dictionary.forEach(w=>{
            
            if(e.includes(w) ){
                out.push([w,lineCount,e.indexOf(w)])
                
            }
        });
    });
}
function automata(a,b){
    for(let i = 0;i<a.length;){
        for (let j = 0; j < b.length;j++) {
            if(b.charAt(j) == a.charAt(i)){
                i++;
            }
        }
    }
}
rl = readline('./promedio.c');
rl.on('line', function(line, lineCount, byteCount) {
    
    analyzeLine(line,words,lineCount);
})
.on('error', function(e) {
    console.log("Error al leer archivo");
});
console.log(out)