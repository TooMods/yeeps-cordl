#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Vector3IntSerializationSurrogate)
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
class Vector3IntSerializationSurrogate;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Vector3IntSerializationSurrogate);
// Type: ::Vector3IntSerializationSurrogate
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Vector3IntSerializationSurrogate*
class CORDL_TYPE Vector3IntSerializationSurrogate : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializationSurrogate"
  constexpr operator ::System::Runtime::Serialization::ISerializationSurrogate*() noexcept;

  /// @brief Method GetObjectData, addr 0xf2a548, size 0xf4, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::GlobalNamespace::Vector3IntSerializationSurrogate* New_ctor();

  /// @brief Method SetObjectData, addr 0xf2a63c, size 0x1fc, virtual true, abstract: false, final true
  inline ::System::Object* SetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context,
                                         ::System::Runtime::Serialization::ISurrogateSelector* selector);

  /// @brief Method .ctor, addr 0xf2a838, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializationSurrogate"
  constexpr ::System::Runtime::Serialization::ISerializationSurrogate* i___System__Runtime__Serialization__ISerializationSurrogate() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3IntSerializationSurrogate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3IntSerializationSurrogate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3IntSerializationSurrogate(Vector3IntSerializationSurrogate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3IntSerializationSurrogate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3IntSerializationSurrogate(Vector3IntSerializationSurrogate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Vector3IntSerializationSurrogate, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Vector3IntSerializationSurrogate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Vector3IntSerializationSurrogate*, "", "Vector3IntSerializationSurrogate");
