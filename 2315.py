import datetime

dia, mes = [int(n) for n in str(input()).split()]
data_final = datetime.date(day=dia, month=mes, year=2018)

dia, mes = [int(n) for n in str(input()).split()]
data_inicial = datetime.date(day=dia, month=mes, year=2018)

data_resultado = data_inicial - data_final

print(data_resultado.days)
