x = input('Digite algo: ')

print('\nTipo primitivo: {}'.format(type(x)))
print('É alfabético: {}'.format(x.isalpha()))
print('É numérico: {}'.format(x.isnumeric()))
print('É alfanumérico: {}'.format(x.isalnum()))
print('Esta em minusculo: {}'.format(x.islower()))
print('Esta em maiusculo: {}'.format(x.isupper()))
print('Está capitalizado: {}'.format(x.istitle()))
print('Só tem espaços: {}'.format(x.isspace()))