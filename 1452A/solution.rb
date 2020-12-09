class Anfitrion
    def initialize(name = "World")
        @name = name.capitalize
    end
    def salute
        puts "Hola #{@name}"
    end
    def goodbye
        puts "Goodbye #{@name}"
    end
end

a = Anfitrion.new("tatiana")
puts Anfitrion.instance_methods(false)