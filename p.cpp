int alpha = 3;

switch (alpha % 6)

{

case 0:

alpha--;

break;

case 1:

case 2:

alpha = alpha * 2;

break;

case 3:

break;

case 4:

alpha = alpha - 5;

case 5:

alpha++;

break;

default:

alpha = alpha / 3;

}