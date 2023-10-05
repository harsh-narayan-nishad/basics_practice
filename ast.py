import ast

source_code = """
def greet(name):
    print(f"Hello, {name}!")

greet("Alice")
"""

tree = ast.parse(source_code)

class FunctionVisitor(ast.NodeVisitor):
    def visit_FunctionDef(self, node):
        print(f"Found function: {node.name}")

visitor = FunctionVisitor()
visitor.visit(tree)