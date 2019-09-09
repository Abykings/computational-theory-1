var a = [0,1]
var pow = 3;
var count=0;

function productoCartesiano(a,b){
    var res = [];
        a.forEach(eA => {
            b.forEach(eB=>{
                res.push([eA+""+eB]);
            });
        });
    count++;
    if(count<pow){
        console.log(res)
        productoCartesiano(res,a);
    }
    return res;
}
console.log(productoCartesiano(a,a));