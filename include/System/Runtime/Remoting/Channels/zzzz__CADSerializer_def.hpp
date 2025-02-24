#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CADSerializer)
namespace System::IO {
class MemoryStream;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodCallMessage;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class CADSerializer;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Channels::CADSerializer);
// Type: System.Runtime.Remoting.Channels::CADSerializer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Channels::CADSerializer*
class CORDL_TYPE CADSerializer : public ::System::Object {
public:
  // Declarations
  /// @brief Method DeserializeMessage, addr 0x18590c0, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Messaging::IMessage* DeserializeMessage(::System::IO::MemoryStream* mem, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);

  /// @brief Method DeserializeObject, addr 0x185976c, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeObject(::System::IO::MemoryStream* mem);

  /// @brief Method DeserializeObjectSafe, addr 0x18596cc, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeObjectSafe(::ArrayW<uint8_t, ::Array<uint8_t>*> mem);

  /// @brief Method SerializeMessage, addr 0x1858b0c, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::IO::MemoryStream* SerializeMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  /// @brief Method SerializeObject, addr 0x18597f4, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::IO::MemoryStream* SerializeObject(::System::Object* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CADSerializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CADSerializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CADSerializer(CADSerializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CADSerializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CADSerializer(CADSerializer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Channels::CADSerializer, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Channels
NEED_NO_BOX(::System::Runtime::Remoting::Channels::CADSerializer);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::CADSerializer*, "System.Runtime.Remoting.Channels", "CADSerializer");
