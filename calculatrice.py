# projet 02_calculatrice simple 
#developpe par Alae-kairouan
print("===Calculatrice Pyschool===")
#Demander les nombres
nombre1=float(input("entrez le premier nombre:"))
operation=input("choisissez l'operation(+,-,*,/):")
nombre2=float(input("entrez le deuxieme nombre:"))
#Calcul
if operation =="+":
  resultat=nombre1+nombre2
elif operation =="-":
  resultat=nombre1-nombre2
elif operation =="*":
  resultat=nombre1*nombre2
elif operation =="/":
  if nombre2!=0:
    resultat=nombre1/nombre2
  else:
    resultat="erreur:Division par zero!"
else:
  resultat="operation invalide!"
print(f"Resultat:{resultat}")
print("Merci d'avoir utilise la calculatrice!")
