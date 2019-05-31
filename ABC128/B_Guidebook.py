def main():
    N = int(input())
    restaurants = []
    for i in range(N):
        si, pi = input().split()
        restaurants.append([i+1, si, int(pi)])
    cities = sorted(set([restaurant[1] for restaurant in restaurants]))

    for city in cities:
        same_cities = []
        for restaurant in restaurants:
            if restaurant[1] == city:
                same_cities.append(restaurant)
        sorted_restaurants = sorted(same_cities, key=lambda restaurant: restaurant[2], reverse=True)
        [print(restaurant[0]) for restaurant in sorted_restaurants]


if __name__ == '__main__':
    main()
