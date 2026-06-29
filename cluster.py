class BaseServer():
    def __init__(self, server_id, ram_gb):
        self.server_id = server_id
        self.ram_gb = ram_gb

    def get_spec(self):
        return f"Server {self.server_id} | RAM: {self.ram_gb}GB"
    
class ComputeNode(BaseServer):
    def __init__(self, server_id, ram_gb, gpu_model):
        super().__init__(server_id, ram_gb)
        self.gpu_model = gpu_model

    def get_spec(self):
        par_txt = super().get_spec()
        return f"{par_txt} | GPU: {self.gpu_model}"
    
if __name__ == "__main__":
    node = ComputeNode(101, 64, "NVIDIA H100")
    print("--- RUNNING DIAGNOSTIC SPEC SUMMARY ---")
    print(node.get_spec())
    

