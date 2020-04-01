window.addEventListener('load', (event) => {
    console.log('page is fully loaded and will now close IF we were opened by another window to begin with');
    setTimeout(function(){
        window.close();
    }, 1000);
});