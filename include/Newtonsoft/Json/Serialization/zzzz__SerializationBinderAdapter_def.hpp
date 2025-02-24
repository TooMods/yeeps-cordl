#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SerializationBinderAdapter)
namespace Newtonsoft::Json::Serialization {
class ISerializationBinder;
}
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class SerializationBinderAdapter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::SerializationBinderAdapter);
// Type: Newtonsoft.Json.Serialization::SerializationBinderAdapter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::SerializationBinderAdapter*
class CORDL_TYPE SerializationBinderAdapter : public ::System::Object {
public:
  // Declarations
  /// @brief Field SerializationBinder, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_SerializationBinder, put = __cordl_internal_set_SerializationBinder))::System::Runtime::Serialization::SerializationBinder* SerializationBinder;

  /// @brief Convert operator to "::Newtonsoft::Json::Serialization::ISerializationBinder"
  constexpr operator ::Newtonsoft::Json::Serialization::ISerializationBinder*() noexcept;

  /// @brief Method BindToName, addr 0x1092314, size 0x20, virtual true, abstract: false, final true
  inline void BindToName(::System::Type* serializedType, ByRef<::StringW> assemblyName, ByRef<::StringW> typeName);

  /// @brief Method BindToType, addr 0x10922f4, size 0x20, virtual true, abstract: false, final true
  inline ::System::Type* BindToType(::StringW assemblyName, ::StringW typeName);

  static inline ::Newtonsoft::Json::Serialization::SerializationBinderAdapter* New_ctor(::System::Runtime::Serialization::SerializationBinder* serializationBinder);

  constexpr ::System::Runtime::Serialization::SerializationBinder*& __cordl_internal_get_SerializationBinder();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationBinder*> const& __cordl_internal_get_SerializationBinder() const;

  constexpr void __cordl_internal_set_SerializationBinder(::System::Runtime::Serialization::SerializationBinder* value);

  /// @brief Method .ctor, addr 0x10922cc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationBinder* serializationBinder);

  /// @brief Convert to "::Newtonsoft::Json::Serialization::ISerializationBinder"
  constexpr ::Newtonsoft::Json::Serialization::ISerializationBinder* i___Newtonsoft__Json__Serialization__ISerializationBinder() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationBinderAdapter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializationBinderAdapter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationBinderAdapter(SerializationBinderAdapter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationBinderAdapter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationBinderAdapter(SerializationBinderAdapter const&) = delete;

  /// @brief Field SerializationBinder, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationBinder* ___SerializationBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::SerializationBinderAdapter, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::SerializationBinderAdapter, ___SerializationBinder) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::SerializationBinderAdapter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::SerializationBinderAdapter*, "Newtonsoft.Json.Serialization", "SerializationBinderAdapter");
