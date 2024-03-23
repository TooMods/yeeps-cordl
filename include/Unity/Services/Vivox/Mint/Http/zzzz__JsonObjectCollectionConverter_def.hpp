#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(JsonObjectCollectionConverter)
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
class JsonObjectCollectionConverter;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter);
// Type: Unity.Services.Vivox.Mint.Http::JsonObjectCollectionConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Http::JsonObjectCollectionConverter*
class CORDL_TYPE JsonObjectCollectionConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  /// @brief Method CanConvert, addr 0x1706164, size 0x40, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  static inline ::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter* New_ctor();

  /// @brief Method ReadJson, addr 0x1705e94, size 0x2d0, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x1705c30, size 0x264, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x17061a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonObjectCollectionConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonObjectCollectionConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonObjectCollectionConverter(JsonObjectCollectionConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonObjectCollectionConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonObjectCollectionConverter(JsonObjectCollectionConverter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::JsonObjectCollectionConverter*, "Unity.Services.Vivox.Mint.Http", "JsonObjectCollectionConverter");
