#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IEventStreamMessage)
namespace Amazon::Runtime::EventStreams {
class IEventStreamHeader;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Amazon::Runtime::EventStreams {
class IEventStreamMessage;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::EventStreams::IEventStreamMessage);
// Type: Amazon.Runtime.EventStreams::IEventStreamMessage
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams {
// Is value type: false
// CS Name: ::Amazon.Runtime.EventStreams::IEventStreamMessage*
class CORDL_TYPE IEventStreamMessage {
public:
  // Declarations
  __declspec(property(get = get_Headers, put = set_Headers))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>* Headers;

  __declspec(property(get = get_Payload, put = set_Payload))::ArrayW<uint8_t, ::Array<uint8_t>*> Payload;

  /// @brief Method ToByteArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToByteArray();

  /// @brief Method get_Headers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>* get_Headers();

  /// @brief Method get_Payload, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Payload();

  /// @brief Method set_Headers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Headers(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::EventStreams::IEventStreamHeader*>* value);

  /// @brief Method set_Payload, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Payload(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  // Ctor Parameters [CppParam { name: "", ty: "IEventStreamMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEventStreamMessage(IEventStreamMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEventStreamMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEventStreamMessage(IEventStreamMessage const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::EventStreams
NEED_NO_BOX(::Amazon::Runtime::EventStreams::IEventStreamMessage);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::EventStreams::IEventStreamMessage*, "Amazon.Runtime.EventStreams", "IEventStreamMessage");
