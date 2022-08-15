


document.getElementById('upload').onclick=function(){
    ImgName=document.getElementById('namebox').value;
    var uploadTask=firebase.storage().ref('Images/'+ImgName+'.png').put(files[0]);

    uploadTask.on('state_changed',function(snapshot){
        var progress=(snapshot.bytesTransferred/snapshot.totalBytes)*100;
        document.getElementById('UpProgress').innerHTML='Upload'+progress+'%';
    },
    function(error){
        alert('error in saving image');
    }

})