var photo1 = document.querySelector('.photo1');
console.log(photo1);

photo1.addEventListener('click',function(){
    showImage(photo1);
    openLightbox();
})