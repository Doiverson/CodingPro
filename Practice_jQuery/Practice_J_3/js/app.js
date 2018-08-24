
const $odd = $('a:odd');
const $secureLinks = $('a[href^="https://"]'); /*$は末尾、^は先頭*/
const $pdfs = $('a[href$=".pdf"]');
const $pdfCheckbox = $('<label><input type="checkbox"> Allow PDF downloads</label>');

$secureLinks.attr('target', '_blank');
$pdfs.attr('download', true);

$secureLinks.addClass('secure')
$pdfs.addClass('pdf')

$pdfs.on('click', (event)=>{
    if($(':checked').length === 0){
        event.preventDefault();
        alert('Please check the box to allow download')
    }
});

$('#links').append($pdfCheckbox);

$('a').each(function (index, link) {
    const url = $(link).attr('href');
    $(link).parent().append()
})