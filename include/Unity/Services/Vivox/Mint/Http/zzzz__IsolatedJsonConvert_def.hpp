#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IsolatedJsonConvert)
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Http {
class IsolatedJsonConvert;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Http::IsolatedJsonConvert);
// Type: Unity.Services.Vivox.Mint.Http::IsolatedJsonConvert
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Http::IsolatedJsonConvert*
class CORDL_TYPE IsolatedJsonConvert : public ::System::Object {
public:
  // Declarations
  /// @brief Method DeserializeObject, addr 0x1704b0c, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeObject(::StringW value, ::System::Type* type);

  /// @brief Method DeserializeObject, addr 0x1704b14, size 0x1f8, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeObject(::StringW value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T DeserializeObject(::StringW value, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method SerializeObject, addr 0x1704808, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value);

  /// @brief Method SerializeObject, addr 0x1704864, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method SerializeObject, addr 0x1704830, size 0x34, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method SerializeObjectInternal, addr 0x170488c, size 0x280, virtual false, abstract: false, final false
  static inline ::StringW SerializeObjectInternal(::System::Object* value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializer* jsonSerializer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IsolatedJsonConvert();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IsolatedJsonConvert", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IsolatedJsonConvert(IsolatedJsonConvert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IsolatedJsonConvert", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IsolatedJsonConvert(IsolatedJsonConvert const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::IsolatedJsonConvert, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Http::IsolatedJsonConvert);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::IsolatedJsonConvert*, "Unity.Services.Vivox.Mint.Http", "IsolatedJsonConvert");
