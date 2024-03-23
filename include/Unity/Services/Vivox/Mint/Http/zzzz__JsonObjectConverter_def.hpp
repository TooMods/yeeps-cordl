#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(JsonObjectConverter)
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Http {
class JsonObjectConverter;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Http::JsonObjectConverter);
// Type: Unity.Services.Vivox.Mint.Http::JsonObjectConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Http::JsonObjectConverter*
class CORDL_TYPE JsonObjectConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  /// @brief Method CanConvert, addr 0x1705be8, size 0x40, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  static inline ::Unity::Services::Vivox::Mint::Http::JsonObjectConverter* New_ctor();

  /// @brief Method ReadJson, addr 0x1705a4c, size 0x19c, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x17058e4, size 0x168, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x1705c28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonObjectConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonObjectConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonObjectConverter(JsonObjectConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonObjectConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonObjectConverter(JsonObjectConverter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::JsonObjectConverter, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Http::JsonObjectConverter);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::JsonObjectConverter*, "Unity.Services.Vivox.Mint.Http", "JsonObjectConverter");
