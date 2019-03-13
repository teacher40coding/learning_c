function getElement(elem) {
    return document.querySelector(elem);
}
var photo1 = getElement('.photo1');
console.log(photo1);

photo1.addEventListener('click',function(){
    showImage(photo1);
    openLightbox();
})