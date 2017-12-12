s = raw_input().split('_')
l = [x.title() for x in s[1:]]
print s[0].lower()+''.join(l)