import pyshorteners
import emoji

print('\n\n\n')
print(emoji.emojize(':star: Encutador de links:star:\n'))
url = str(input('Insira o link: '))

link = pyshorteners.Shortener()
shorten_url = link.tinyurl.short(url)

print(f'\n{shorten_url}')
print(emoji.emojize(':thumbs_up: Link encurtado com sucesso :thumbs_up:\n'))