#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Configuration)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint {
class Configuration;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Configuration);
// Type: Unity.Services.Vivox.Mint::Configuration
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint::Configuration*
class CORDL_TYPE Configuration : public ::System::Object {
public:
  // Declarations
  /// @brief Field BasePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_BasePath, put = __cordl_internal_set_BasePath))::StringW BasePath;

  /// @brief Field Headers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Headers, put = __cordl_internal_set_Headers))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Headers;

  /// @brief Field NumberOfRetries, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_NumberOfRetries, put = __cordl_internal_set_NumberOfRetries))::System::Nullable_1<int32_t> NumberOfRetries;

  /// @brief Field RequestTimeout, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_RequestTimeout, put = __cordl_internal_set_RequestTimeout))::System::Nullable_1<int32_t> RequestTimeout;

  /// @brief Method MergeConfigurations, addr 0x1700cd4, size 0x6b8, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::Mint::Configuration* MergeConfigurations(::Unity::Services::Vivox::Mint::Configuration* a, ::Unity::Services::Vivox::Mint::Configuration* b);

  static inline ::Unity::Services::Vivox::Mint::Configuration* New_ctor(::StringW basePath, ::System::Nullable_1<int32_t> requestTimeout, ::System::Nullable_1<int32_t> numRetries,
                                                                        ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers);

  constexpr ::StringW const& __cordl_internal_get_BasePath() const;

  constexpr ::StringW& __cordl_internal_get_BasePath();

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get_Headers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get_Headers() const;

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_NumberOfRetries() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_NumberOfRetries();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_RequestTimeout() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_RequestTimeout();

  constexpr void __cordl_internal_set_BasePath(::StringW value);

  constexpr void __cordl_internal_set_Headers(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set_NumberOfRetries(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set_RequestTimeout(::System::Nullable_1<int32_t> value);

  /// @brief Method .ctor, addr 0x1700bfc, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::StringW basePath, ::System::Nullable_1<int32_t> requestTimeout, ::System::Nullable_1<int32_t> numRetries,
                    ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Configuration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Configuration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Configuration(Configuration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Configuration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Configuration(Configuration const&) = delete;

  /// @brief Field BasePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___BasePath;

  /// @brief Field RequestTimeout, offset: 0x18, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ___RequestTimeout;

  /// @brief Field NumberOfRetries, offset: 0x20, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ___NumberOfRetries;

  /// @brief Field Headers, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ___Headers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Configuration, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Configuration, ___BasePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Configuration, ___RequestTimeout) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Configuration, ___NumberOfRetries) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Configuration, ___Headers) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Configuration);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Configuration*, "Unity.Services.Vivox.Mint", "Configuration");
