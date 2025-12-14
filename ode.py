import sympy as sp


t = sp.Symbol('t')
n = 6  


a = 1 + t

# Define ODE: x'(t) = 1/2 * a(t) * x(t)^2 + 1
x = sp.Function('x')

ode = sp.Eq(sp.diff(x(t), t), sp.Rational(1,2)*a*x(t)**2 + 1)


series_sol = sp.series(sp.dsolve(ode, x(t)), t, 0, n)

print(series_sol)