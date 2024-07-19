pan_number = "ABCDE1234F"
if len(pan_number) == 10 and pan_number[:5].isalpha() and pan_number[5:9].isdigit() and pan_number[9].isalpha() and pan_number.isupper():
    print("The PAN number is valid.")
else:
    print("The PAN number is not valid.")
if pan_number.isupper():
    print('yes')
else:
    print('no')