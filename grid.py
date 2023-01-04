#### INIT ####
import pygame
pygame.init()
w = 720
h = 720
window_size = (w, h)
screen = pygame.display.set_mode(window_size)
pygame.display.set_caption('grid node test')
bg = (255, 255, 255)
rows = 6
cols = 6
square_width = 100
square_height = 100
running = True
margin = 10


# handle rendering
grid = [[0 for i in range(cols)] for j in range(rows)]
print(grid)

while running:
  screen.fill(bg)
  for i in range(rows):
    for j in range(cols):
      if grid[i][j] == 0:
        color = (255, 0, 0)
      elif grid[i][j] == 1:
        color = (0, 0, 255)
      elif grid[i][j] == 2:
        color = (0, 255, 0)

      pygame.draw.rect(screen, color, [j * square_width + margin * (j + 1), i * square_height + margin * (i + 1), square_width, square_height])
  pygame.display.update()

  # handle events
  for event in pygame.event.get():
    if event.type == pygame.QUIT:
      running = False
      
    if event.type == pygame.MOUSEBUTTONDOWN:
      # coords + find square
      mouse_x, mouse_y = pygame.mouse.get_pos()

      col = mouse_x // (square_width + margin)
      row = mouse_y // (square_height + margin)

      grid[row][col] = (grid[row][col] + 1) % 3

    

pygame.quit()
