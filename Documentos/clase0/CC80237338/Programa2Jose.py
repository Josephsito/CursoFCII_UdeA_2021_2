from math import *
 
a = int(input('Ingrese coef a: '))
b = int(input('Ingrese coef b: '))
c = int(input('Ingrese coef c: '))
 
disc = b**2-4*a*c
 
if disc > 0:
    x1 = (-b+sqrt(disc))/(2*a)
    x2 = (-b-sqrt(disc))/(2*a)
    print('\nRaices reales\n')
    print('x1 = %.2f' %x)
    print('x2 = %.2f' %y)
elif disc == 0:
    x = (-b)/(2*a)
    print('\nUna sola raiz real\n')
    print('x1 = %.2f' %x)
else:
    print('\nRaices complejas\n')
    x1 = (-(b))/(2*a)
    x = ('%.2f' %x1)
    c1 = (sqrt(abs(disc)))/(2*a)
    c = ('%.2f' %c1)
    print(x,'+',c+'i')
 
    x1 = (-(b))/(2*a)
    x = ('%.2f' %x1)
    c2 = (sqrt(abs(disc)))/(2*a)
    c = ('%.2f' %c2)
    print(x,'-',c+'i')
