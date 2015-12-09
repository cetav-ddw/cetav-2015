// Manatí Base Theme JS functions
(function($) {
  $(function() { 
    function breakList(numOfLists, list){
      var listLength = list.find("li").length;
      var numInRow = 11; // Num of desired items on each column.
      var listItems; // list of the sliced items.
      var newList; // New lists wrapper.
      var i = 0;
      for (i;i<numOfLists;i++){
        listItems = list.find("li").slice(0, numInRow); // Gest the desired items for each column.
        newList = $("<ul/>").append(listItems); // Wrap them into another "ul".
        $(".split-list").append(newList); // Unwrap the items into the desired selector.
      }
      $(".split-list > ul:first-child").remove(); // Removes the empty list.
    }
    breakList(3, $(".split-list ul"));

    $("#show-pay-form").click(function () {
        $(this).toggleClass("hide-button");
        $("#course-form").toggleClass("show-course-form");
        $("#show-course-form").remove();
    });
    
  });
})(jQuery);