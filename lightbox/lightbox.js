

function createLightbox(){
  var body = document.querySelector('body')
  var modal = document.createElement('div');
  var modalContent = document.createElement('div');
  var close = document.createElement('span');
  modal.className = "modal";
  modalContent.className = 'modal-content';
  close.className="close";
  close.innerHTML="&times;"
  close.addEventListener('click',closeLightbox);
  body.appendChild(modal);
  modal.appendChild(close);
  modal.appendChild(modalContent);
}



function showImage(image){
  var modalContent = document.querySelector('.modal-content');
  if(modalContent.firstChild){
    modalContent.removeChild(modalContent.firstChild);
  }
  
  var img = document.createElement('img');
  var imgUrl = getComputedStyle(image).backgroundImage.slice(4, -1).replace(/"/g, "");
  img.src = imgUrl;
console.log(img)
    modalContent.appendChild(img);
}


function openLightbox(){
   document.querySelector(".modal").style.display = "block";
}
function closeLightbox(){
   document.querySelector(".modal").style.display = "none";
}

createLightbox();