
// $('.spoiler button').click(function () {
// });

$('.spoiler').on('click', 'button', function(event){
    console.log(event.target);

    $('event.target')
    $(event.target).hide();
});

const $button = $('<button>Reveal Spoiler</button>');
$('.spoiler').append($button);


$('.spoiler span').hide();



