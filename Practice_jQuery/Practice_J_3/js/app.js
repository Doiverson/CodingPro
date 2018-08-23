
const $odd = $('a:odd');
const $secureLinks = $('a[href^="https://"]'); /*$は末尾、^は先頭*/
const $pdfs = $('a[href$=".pdf"]');

$secureLinks.attr('target', '_blank');
$pdfs.attr('download', true);