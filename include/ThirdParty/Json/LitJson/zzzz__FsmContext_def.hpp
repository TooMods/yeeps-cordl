#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FsmContext)
namespace ThirdParty::Json::LitJson {
class Lexer;
}
// Forward declare root types
namespace ThirdParty::Json::LitJson {
class FsmContext;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::Json::LitJson::FsmContext);
// Type: ThirdParty.Json.LitJson::FsmContext
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// Is value type: false
// CS Name: ::ThirdParty.Json.LitJson::FsmContext*
class CORDL_TYPE FsmContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field L, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_L, put = __cordl_internal_set_L))::ThirdParty::Json::LitJson::Lexer* L;

  /// @brief Field NextState, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_NextState, put = __cordl_internal_set_NextState)) int32_t NextState;

  /// @brief Field Return, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_Return, put = __cordl_internal_set_Return)) bool Return;

  /// @brief Field StateStack, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_StateStack, put = __cordl_internal_set_StateStack)) int32_t StateStack;

  static inline ::ThirdParty::Json::LitJson::FsmContext* New_ctor();

  constexpr ::ThirdParty::Json::LitJson::Lexer*& __cordl_internal_get_L();

  constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Json::LitJson::Lexer*> const& __cordl_internal_get_L() const;

  constexpr int32_t const& __cordl_internal_get_NextState() const;

  constexpr int32_t& __cordl_internal_get_NextState();

  constexpr bool const& __cordl_internal_get_Return() const;

  constexpr bool& __cordl_internal_get_Return();

  constexpr int32_t const& __cordl_internal_get_StateStack() const;

  constexpr int32_t& __cordl_internal_get_StateStack();

  constexpr void __cordl_internal_set_L(::ThirdParty::Json::LitJson::Lexer* value);

  constexpr void __cordl_internal_set_NextState(int32_t value);

  constexpr void __cordl_internal_set_Return(bool value);

  constexpr void __cordl_internal_set_StateStack(int32_t value);

  /// @brief Method .ctor, addr 0x14b11b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FsmContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FsmContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FsmContext(FsmContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FsmContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FsmContext(FsmContext const&) = delete;

  /// @brief Field Return, offset: 0x10, size: 0x1, def value: None
  bool ___Return;

  /// @brief Field NextState, offset: 0x14, size: 0x4, def value: None
  int32_t ___NextState;

  /// @brief Field L, offset: 0x18, size: 0x8, def value: None
  ::ThirdParty::Json::LitJson::Lexer* ___L;

  /// @brief Field StateStack, offset: 0x20, size: 0x4, def value: None
  int32_t ___StateStack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Json::LitJson::FsmContext, 0x28>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::FsmContext, ___Return) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::FsmContext, ___NextState) == 0x14, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::FsmContext, ___L) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::FsmContext, ___StateStack) == 0x20, "Offset mismatch!");

} // namespace ThirdParty::Json::LitJson
NEED_NO_BOX(::ThirdParty::Json::LitJson::FsmContext);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Json::LitJson::FsmContext*, "ThirdParty.Json.LitJson", "FsmContext");
