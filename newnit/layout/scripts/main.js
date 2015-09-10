//$(document).ready(function(){
  $('.slider4').bxSlider({
    slideWidth: 300,
    minSlides:5,
    maxSlides:10,
    moveSlides: 1,
    slideMargin:10
  });
//});


$(window).load(function() {
  $('.flexslider').flexslider({
    animation: "slide",
    touch:true,
    animationLoop:true,
    slideshowSpeed:3000,
    pauseOnHover:false,
    keyboard:true
    
  });
});

  $(window).scroll(function () {
      //if you hard code, then use console
      //.log to determine when you want the 
      //nav bar to stick.  
      //console.log($(window).scrollTop())
    if ($(window).scrollTop() >176) {
      $('#mainav').addClass('navbar-fixed');
      $('#mainav').addClass('clear');
      $('#mainav').addClass('wrapper');
      $('#mainav').addClass('row2');
     $('#mainav').addClass('rounded');
      $("#mainav").css("background-color","#06213F");
        $("#mainav").css("color","white");
       $("#mainav").css("font-weight","bold");
       
    }
    if ($(window).scrollTop() <177) {
      $('#mainav').removeClass('navbar-fixed');
	$("#mainav").css("background-color","#F9F9F9");
        $("#mainav").css("color","black");
        $("#mainav").css("font-weight","normal");
	
    }
  });


$(function() {
        $('#bulletin').bulletin();
      });


$('.expand_hidden_depts').click(function(){

$('#container_hidden_dept').stop().slideToggle("slow").siblings('#container_hidden_dept').stop().slideUp("slow");
	    //$(this).parent().siblings('.navigate').removeClass('active');

});


$('#nittdashboard').click(function(){

$('#hidden_dashboard').stop().slideToggle("slow").siblings('#hidden_dashboard').stop().slideUp("slow");
	    //$(this).parent().siblings('.navigate').removeClass('active');

});


 $("#mission").typed({
        strings: ["To offer state-of-the-art undergraduate, postgraduate and doctoral programmes.", "To generate new knowledge by engaging in cutting-edge research.","To undertake collaborative projects with academia and industries.","To develop human intellectual capability to its fullest potential."],
        typeSpeed: 0,
	showCursor: false,
        //cursorChar: "|",
	loop:true
      });

$("#vission").typed({
        strings: ["To provide valuable resources for industry and society through excellence in technical education and research."],
        typeSpeed:20,
	showCursor: false,
        //cursorChar: "|",
	loop:false
	
      });

  
$('#list_bulletin').newsTicker({
    row_height:50,
    max_rows: 3,
    duration: 4000,
    prevButton: $('#arrow_bulletin_prev'),
    nextButton: $('#arrow_bulletin_next')
});







