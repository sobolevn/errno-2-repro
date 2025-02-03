# Repro

```bash
python3 -m venv .venv
source .venv/bin/activate
pip install .
python -c 'import asm_builtins'
```

You will see:

```
errno = 2
```
