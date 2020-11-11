#Визначити, скільки повних годин та повних хвилин пройшло з початку доби до k-ої її секунди

time_sec = int(input("Enter the number of seconds: "))  # ведення числа секунд k, що пройшли з початку дня

time_min = int(time_sec / 60)   # визначення к-ть повних хвилин з к-ті секунд
print("Minutes: ", time_min)    # вихідні дані

time_hour = int(time_min / 60)  # визначення к-ть повних годин з к-ті хвилин
print("Hours: ", time_hour)     # вихідні дані


