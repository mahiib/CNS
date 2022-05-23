def encrypt(msg,n):
    
    result=""
    for i in range(len(msg)):
        
        c=msg[i]
        
        if(c.isupper()):
            result+=chr((ord(c)+n-65)%26+65)
            
        else:
            result+=chr((ord(c)+n-97)%26+97)
            
    return result
            
def decrypt(t,n):
    result=""
    for i in range(len(t)):
        
        e=t[i]
        
        if(e.isupper()):
            result+=chr((ord(e)-n-65)%26+65)
            
        else:
            result+=chr((ord(e)-n-97)%26+97)

    return result
msg= input("Enter the Plain Text : ")
n=int(input("Enter the key : "))

t=encrypt(msg,n)

print("Cipher text is : ",t)

d=decrypt(t,n)

print("Decrypted text : ",d)

