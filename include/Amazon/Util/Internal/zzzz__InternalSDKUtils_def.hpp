#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InternalSDKUtils)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Util::Internal {
class InternalSDKUtils;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::Internal::InternalSDKUtils);
// Type: Amazon.Util.Internal::InternalSDKUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util::Internal {
// Is value type: false
// CS Name: ::Amazon.Util.Internal::InternalSDKUtils*
class CORDL_TYPE InternalSDKUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field EXECUTION_ENVIRONMENT_ENVVAR, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EXECUTION_ENVIRONMENT_ENVVAR, put = setStaticF_EXECUTION_ENVIRONMENT_ENVVAR))::StringW EXECUTION_ENVIRONMENT_ENVVAR;

  /// @brief Field SpecialPlatformInformation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SpecialPlatformInformation, put = setStaticF_SpecialPlatformInformation))::StringW SpecialPlatformInformation;

  /// @brief Field _customData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__customData, put = setStaticF__customData))::StringW _customData;

  /// @brief Field _customSdkUserAgent, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__customSdkUserAgent, put = setStaticF__customSdkUserAgent))::StringW _customSdkUserAgent;

  /// @brief Field _userAgentBaseName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__userAgentBaseName, put = setStaticF__userAgentBaseName))::StringW _userAgentBaseName;

  /// @brief Field _versionNumber, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__versionNumber, put = setStaticF__versionNumber))::StringW _versionNumber;

  /// @brief Method AddToDictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> static inline void AddToDictionary(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary, TKey key, TValue value);

  /// @brief Method ApplyValues, addr 0x2211848, size 0x8b8, virtual false, abstract: false, final false
  static inline void ApplyValues(::System::Object* target, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* propertyValues);

  /// @brief Method BuildCustomUserAgentString, addr 0x22111a8, size 0x5cc, virtual false, abstract: false, final false
  static inline void BuildCustomUserAgentString();

  /// @brief Method BuildUserAgentString, addr 0x2203d34, size 0x3d8, virtual false, abstract: false, final false
  static inline ::StringW BuildUserAgentString(::StringW serviceSdkVersion);

  /// @brief Method DetermineFramework, addr 0x22126d4, size 0x2a0, virtual false, abstract: false, final false
  static inline ::StringW DetermineFramework();

  /// @brief Method DetermineOS, addr 0x2212974, size 0x190, virtual false, abstract: false, final false
  static inline ::StringW DetermineOS();

  /// @brief Method FillDictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename TKey, typename TValue>
  static inline void FillDictionary(::System::Collections::Generic::IEnumerable_1<T>* items, ::System::Func_2<T, TKey>* keyGenerator, ::System::Func_2<T, TValue>* valueGenerator,
                                    ::System::Collections::Generic::Dictionary_2<TKey, TValue>* targetDictionary);

  /// @brief Method GetExecutionEnvironment, addr 0x2212100, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW GetExecutionEnvironment();

  /// @brief Method GetExecutionEnvironmentUserAgentString, addr 0x2211774, size 0xd4, virtual false, abstract: false, final false
  static inline ::StringW GetExecutionEnvironmentUserAgentString();

  /// @brief Method GetIsSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TVvalue> static inline bool GetIsSet(::System::Collections::Generic::Dictionary_2<TKey, TVvalue>* field);

  /// @brief Method GetIsSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool GetIsSet(::System::Collections::Generic::List_1<T>* field);

  /// @brief Method GetIsSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool GetIsSet(::System::Nullable_1<T> field);

  /// @brief Method GetUnityInformation, addr 0x2212494, size 0x178, virtual false, abstract: false, final false
  static inline ::StringW GetUnityInformation();

  /// @brief Method GetValidSubstringOrUnknown, addr 0x221260c, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW GetValidSubstringOrUnknown(::StringW str, int32_t start, int32_t end);

  /// @brief Method GetXamarinInformation, addr 0x221229c, size 0x1f8, virtual false, abstract: false, final false
  static inline ::StringW GetXamarinInformation();

  /// @brief Method PlatformUserAgent, addr 0x2212b04, size 0x178, virtual false, abstract: false, final false
  static inline ::StringW PlatformUserAgent();

  /// @brief Method SetIsSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> static inline void SetIsSet(bool isSet, ByRef<::System::Collections::Generic::Dictionary_2<TKey, TValue>*> field);

  /// @brief Method SetIsSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void SetIsSet(bool isSet, ByRef<::System::Collections::Generic::List_1<T>*> field);

  /// @brief Method SetIsSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void SetIsSet(bool isSet, ByRef<::System::Nullable_1<T>> field);

  /// @brief Method SetUserAgent, addr 0x22110c4, size 0x68, virtual false, abstract: false, final false
  static inline void SetUserAgent(::StringW productName, ::StringW versionNumber);

  /// @brief Method SetUserAgent, addr 0x221112c, size 0x7c, virtual false, abstract: false, final false
  static inline void SetUserAgent(::StringW productName, ::StringW versionNumber, ::StringW customData);

  /// @brief Method ToDictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename TKey, typename TValue>
  static inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* ToDictionary(::System::Collections::Generic::IEnumerable_1<T>* items, ::System::Func_2<T, TKey>* keyGenerator,
                                                                                         ::System::Func_2<T, TValue>* valueGenerator);

  /// @brief Method ToDictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename TKey, typename TValue>
  static inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* ToDictionary(::System::Collections::Generic::IEnumerable_1<T>* items, ::System::Func_2<T, TKey>* keyGenerator,
                                                                                         ::System::Func_2<T, TValue>* valueGenerator,
                                                                                         ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method TryFindByValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue>
  static inline bool TryFindByValue(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary, TValue value, ::System::Collections::Generic::IEqualityComparer_1<TValue>* valueComparer,
                                    ByRef<TKey> key);

  static inline ::StringW getStaticF_EXECUTION_ENVIRONMENT_ENVVAR();

  static inline ::StringW getStaticF_SpecialPlatformInformation();

  static inline ::StringW getStaticF__customData();

  static inline ::StringW getStaticF__customSdkUserAgent();

  static inline ::StringW getStaticF__userAgentBaseName();

  static inline ::StringW getStaticF__versionNumber();

  static inline void setStaticF_EXECUTION_ENVIRONMENT_ENVVAR(::StringW value);

  static inline void setStaticF_SpecialPlatformInformation(::StringW value);

  static inline void setStaticF__customData(::StringW value);

  static inline void setStaticF__customSdkUserAgent(::StringW value);

  static inline void setStaticF__userAgentBaseName(::StringW value);

  static inline void setStaticF__versionNumber(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalSDKUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalSDKUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalSDKUtils(InternalSDKUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalSDKUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalSDKUtils(InternalSDKUtils const&) = delete;

  /// @brief Field CoreVersionNumber offset 0xffffffff size 0x8
  static constexpr ::ConstString CoreVersionNumber{ u"3.7.0.45" };

  /// @brief Field UnknownPlaceholder offset 0xffffffff size 0x8
  static constexpr ::ConstString UnknownPlaceholder{ u"Unknown" };

  /// @brief Field UnknownPlatform offset 0xffffffff size 0x8
  static constexpr ::ConstString UnknownPlatform{ u"unknown_platform" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::InternalSDKUtils, 0x10>, "Size mismatch!");

} // namespace Amazon::Util::Internal
NEED_NO_BOX(::Amazon::Util::Internal::InternalSDKUtils);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::InternalSDKUtils*, "Amazon.Util.Internal", "InternalSDKUtils");
