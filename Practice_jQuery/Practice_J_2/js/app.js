
// $('.spoiler button').click(function () {
// });

$('.spoiler').on('click', 'button', function(event){
    console.log(event.target);

    // $('.spoiler span').show();
    $(event.target).hide();
});

const $button = $('<button>Reveal Spoiler</button>');
$('.spoiler').prepend($button);


$('.spoiler span').hide();



