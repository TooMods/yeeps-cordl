#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__DateTimeConverterBase_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
CORDL_MODULE_EXPORT(UnixDateTimeConverter)
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
namespace Newtonsoft::Json::Converters {
class UnixDateTimeConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::UnixDateTimeConverter);
// Type: Newtonsoft.Json.Converters::UnixDateTimeConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Converters::UnixDateTimeConverter*
class CORDL_TYPE UnixDateTimeConverter : public ::Newtonsoft::Json::Converters::DateTimeConverterBase {
public:
  // Declarations
  /// @brief Field UnixEpoch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UnixEpoch, put = setStaticF_UnixEpoch))::System::DateTime UnixEpoch;

  static inline ::Newtonsoft::Json::Converters::UnixDateTimeConverter* New_ctor();

  /// @brief Method ReadJson, addr 0x11b0a64, size 0x3f8, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x11b0830, size 0x234, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x11b0e5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::DateTime getStaticF_UnixEpoch();

  static inline void setStaticF_UnixEpoch(::System::DateTime value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnixDateTimeConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnixDateTimeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnixDateTimeConverter(UnixDateTimeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnixDateTimeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnixDateTimeConverter(UnixDateTimeConverter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::UnixDateTimeConverter, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::UnixDateTimeConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::UnixDateTimeConverter*, "Newtonsoft.Json.Converters", "UnixDateTimeConverter");
