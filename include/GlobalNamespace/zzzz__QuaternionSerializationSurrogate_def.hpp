#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(QuaternionSerializationSurrogate)
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class QuaternionSerializationSurrogate;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::QuaternionSerializationSurrogate);
// Type: ::QuaternionSerializationSurrogate
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::QuaternionSerializationSurrogate*
class CORDL_TYPE QuaternionSerializationSurrogate : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializationSurrogate"
  constexpr operator ::System::Runtime::Serialization::ISerializationSurrogate*() noexcept;

  /// @brief Method GetObjectData, addr 0xf2a840, size 0x12c, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::GlobalNamespace::QuaternionSerializationSurrogate* New_ctor();

  /// @brief Method SetObjectData, addr 0xf2a96c, size 0x25c, virtual true, abstract: false, final true
  inline ::System::Object* SetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context,
                                         ::System::Runtime::Serialization::ISurrogateSelector* selector);

  /// @brief Method .ctor, addr 0xf2abc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializationSurrogate"
  constexpr ::System::Runtime::Serialization::ISerializationSurrogate* i___System__Runtime__Serialization__ISerializationSurrogate() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuaternionSerializationSurrogate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuaternionSerializationSurrogate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuaternionSerializationSurrogate(QuaternionSerializationSurrogate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuaternionSerializationSurrogate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuaternionSerializationSurrogate(QuaternionSerializationSurrogate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuaternionSerializationSurrogate, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::QuaternionSerializationSurrogate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuaternionSerializationSurrogate*, "", "QuaternionSerializationSurrogate");
