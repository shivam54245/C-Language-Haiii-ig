% 1. Linear Algebra Verification (Ax = b)
A = [2, 1; 1, 3];
b = [8; 13];
x = A \ b;

disp('--- Numerical Computation Test ---');
disp('Solution to Ax = b (should be [2.2; 3.6]):');
disp(x);

% 2. 2D Plotting Verification
t = linspace(0, 2*pi, 100);
y = sin(t);

figure('Name', 'Octave/MATLAB Test Figure');
plot(t, y, '-r', 'LineWidth', 2);
grid on;
title('Test Plot: sin(t)');
xlabel('t (radians)');
ylabel('Amplitude');

disp('Plot window generated successfully.');
