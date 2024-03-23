#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExporterFunc_1)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace ThirdParty::Json::LitJson {
class JsonWriter;
}
// Forward declare root types
namespace ThirdParty::Json::LitJson {
template <typename T> class ExporterFunc_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::ThirdParty::Json::LitJson::ExporterFunc_1);
// Type: ThirdParty.Json.LitJson::ExporterFunc`1
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::ThirdParty.Json.LitJson::ExporterFunc`1<T>*
class CORDL_TYPE ExporterFunc_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(T obj, ::ThirdParty::Json::LitJson::JsonWriter* writer, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(T obj, ::ThirdParty::Json::LitJson::JsonWriter* writer);

  static inline ::ThirdParty::Json::LitJson::ExporterFunc_1<T>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExporterFunc_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExporterFunc_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExporterFunc_1(ExporterFunc_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExporterFunc_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExporterFunc_1(ExporterFunc_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace ThirdParty::Json::LitJson
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::ThirdParty::Json::LitJson::ExporterFunc_1, "ThirdParty.Json.LitJson", "ExporterFunc`1");
