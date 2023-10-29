#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/type_adapter.hpp"
#include "rclcpp/rclcpp.hpp"

template<typename TRawMessage, typename TRosMessage>
struct rclcpp::TypeAdapter<TRawMessage, TRosMessage> {
    using is_specialized = std::true_type;
    using custom_type = TRawMessage;
    using ros_message_type = TRosMessage;

    static void convert_to_ros_message(const custom_type& source, ros_message_type& destination){
        destination.data = source;
    }

    static void convert_to_custom(const ros_message_type& source, custom_type& destination){
        destination = source.data;
    }
}

template<typename TRawMessage, typename TRosMessage>
class IRosPublisher : public rclcpp::Node {
public:
    void 

    void when() {
        
    }

}

int main() {

}