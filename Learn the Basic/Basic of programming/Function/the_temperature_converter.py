def temperature_converter(calcious):
    Foranhite=calcious * (9/5) +32
    return Foranhite

celcious=float(input("Enter the celcious Temperature: "))
print(f"{celcious} celcious ={temperature_converter(celcious)} fornahite")