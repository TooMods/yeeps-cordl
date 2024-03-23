#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ImporterFunc_2)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ThirdParty::Json::LitJson {
template <typename TJson, typename TValue> class ImporterFunc_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::ThirdParty::Json::LitJson::ImporterFunc_2);
// Type: ThirdParty.Json.LitJson::ImporterFunc`2
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// cpp template
template <typename TJson, typename TValue>
// Is value type: false
// CS Name: ::ThirdParty.Json.LitJson::ImporterFunc`2<TJson,TValue>*
class CORDL_TYPE ImporterFunc_2 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(TJson input, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValue EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValue Invoke(TJson input);

  static inline ::ThirdParty::Json::LitJson::ImporterFunc_2<TJson, TValue>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImporterFunc_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImporterFunc_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImporterFunc_2(ImporterFunc_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImporterFunc_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImporterFunc_2(ImporterFunc_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace ThirdParty::Json::LitJson
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::ThirdParty::Json::LitJson::ImporterFunc_2, "ThirdParty.Json.LitJson", "ImporterFunc`2");
