#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StatusCodePolicyConfig)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
class StatusCodePolicyConfig;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig);
// Type: Unity.Services.Vivox.Mint.ErrorMitigation::StatusCodePolicyConfig
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.ErrorMitigation::StatusCodePolicyConfig*
class CORDL_TYPE StatusCodePolicyConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Field _statusCodesToHandleDict, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__statusCodesToHandleDict,
                      put = __cordl_internal_set__statusCodesToHandleDict))::System::Collections::Generic::IDictionary_2<int64_t, bool>* _statusCodesToHandleDict;

  /// @brief Method Clear, addr 0x1707d1c, size 0xa4, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method DontHandleStatusCode, addr 0x1707b30, size 0x1ec, virtual false, abstract: false, final false
  inline void DontHandleStatusCode(int64_t code);

  /// @brief Method HandleStatusCode, addr 0x1707944, size 0x1ec, virtual false, abstract: false, final false
  inline void HandleStatusCode(int64_t code);

  /// @brief Method IsHandledStatusCode, addr 0x1707dc0, size 0xf8, virtual false, abstract: false, final false
  inline bool IsHandledStatusCode(int64_t code);

  static inline ::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig* New_ctor();

  constexpr ::System::Collections::Generic::IDictionary_2<int64_t, bool>*& __cordl_internal_get__statusCodesToHandleDict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<int64_t, bool>*> const& __cordl_internal_get__statusCodesToHandleDict() const;

  constexpr void __cordl_internal_set__statusCodesToHandleDict(::System::Collections::Generic::IDictionary_2<int64_t, bool>* value);

  /// @brief Method .ctor, addr 0x1707eb8, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StatusCodePolicyConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StatusCodePolicyConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StatusCodePolicyConfig(StatusCodePolicyConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StatusCodePolicyConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StatusCodePolicyConfig(StatusCodePolicyConfig const&) = delete;

  /// @brief Field _statusCodesToHandleDict, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<int64_t, bool>* ____statusCodesToHandleDict;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig, ____statusCodesToHandleDict) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint::ErrorMitigation
NEED_NO_BOX(::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::ErrorMitigation::StatusCodePolicyConfig*, "Unity.Services.Vivox.Mint.ErrorMitigation", "StatusCodePolicyConfig");
