class SecureVault():
    def __init__(self):
        self.__balance = 1000

    @property
    def bal(self):
        return self.__balance
    
    @bal.setter
    def bal(self, val):
        if val > 0:
            self.__balance = val
        else:
            print("[SYSTEM WARNING] Operation blocked: Deposit value must be greater than 0.")

vault = SecureVault()
vault.__balance = -5000

print("--- DISCOVERY DIAGNOSTICS ---")
print(f"Fake Outer Variable (vault.__balance): {vault.__balance}")

print(f"True Vault Balance (vault.bal):        {vault.bal}")

print(f"Raw Object RAM Map (__dict__):        {vault.__dict__}")

print("\n--- TESTING THE SETTER INTERFACE ---")
vault.bal = -200
print(f"Balance after illegal update: {vault.bal}")

vault.bal = 1500
print(f"Balance after valid update:   {vault.bal}")