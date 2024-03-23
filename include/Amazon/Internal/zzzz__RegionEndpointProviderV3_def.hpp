#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RegionEndpointProviderV3)
namespace Amazon::Internal {
class IRegionEndpointProvider;
}
namespace Amazon::Internal {
class IRegionEndpoint;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::IO {
class Stream;
}
namespace System::Threading {
class ReaderWriterLockSlim;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace ThirdParty::Json::LitJson {
class JsonData;
}
// Forward declare root types
namespace Amazon::Internal {
class RegionEndpointProviderV3;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Internal::RegionEndpointProviderV3);
// Type: Amazon.Internal::RegionEndpointProviderV3
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Internal {
// Is value type: false
// CS Name: ::Amazon.Internal::RegionEndpointProviderV3*
class CORDL_TYPE RegionEndpointProviderV3 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AllRegionEndpoints))::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>* AllRegionEndpoints;

  __declspec(property(get = get_AllRegionRegex))::System::Collections::Generic::IEnumerable_1<::StringW>* AllRegionRegex;

  /// @brief Field _allRegionEndpoints, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__allRegionEndpoints,
                      put = __cordl_internal_set__allRegionEndpoints))::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>* _allRegionEndpoints;

  /// @brief Field _allRegionRegex, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__allRegionRegex, put = __cordl_internal_set__allRegionRegex))::System::Collections::Generic::IEnumerable_1<::StringW>* _allRegionRegex;

  /// @brief Field _allRegionRegexLock, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__allRegionRegexLock, put = __cordl_internal_set__allRegionRegexLock))::System::Object* _allRegionRegexLock;

  /// @brief Field _emptyDictionaryJsonData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__emptyDictionaryJsonData, put = setStaticF__emptyDictionaryJsonData))::ThirdParty::Json::LitJson::JsonData* _emptyDictionaryJsonData;

  /// @brief Field _nonStandardRegionNameToObjectMap, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__nonStandardRegionNameToObjectMap,
      put = __cordl_internal_set__nonStandardRegionNameToObjectMap))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::IRegionEndpoint*>* _nonStandardRegionNameToObjectMap;

  /// @brief Field _readerWriterLock, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__readerWriterLock, put = __cordl_internal_set__readerWriterLock))::System::Threading::ReaderWriterLockSlim* _readerWriterLock;

  /// @brief Field _regionEndpointMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__regionEndpointMap,
                      put = __cordl_internal_set__regionEndpointMap))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::IRegionEndpoint*>* _regionEndpointMap;

  /// @brief Field _root, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__root, put = __cordl_internal_set__root))::ThirdParty::Json::LitJson::JsonData* _root;

  /// @brief Field disposedValue, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_disposedValue, put = __cordl_internal_set_disposedValue)) bool disposedValue;

  /// @brief Convert operator to "::Amazon::Internal::IRegionEndpointProvider"
  constexpr operator ::Amazon::Internal::IRegionEndpointProvider*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x21fcae0, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x21fcaa8, size 0x38, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetEndpointJsonSourceStream, addr 0x21fa370, size 0x228, virtual false, abstract: false, final false
  static inline ::System::IO::Stream* GetEndpointJsonSourceStream();

  /// @brief Method GetNonstandardRegionEndpoint, addr 0x21fbf3c, size 0xb6c, virtual false, abstract: false, final false
  inline ::Amazon::Internal::IRegionEndpoint* GetNonstandardRegionEndpoint(::StringW regionName);

  /// @brief Method GetRegionEndpoint, addr 0x21fb788, size 0x7b4, virtual true, abstract: false, final true
  inline ::Amazon::Internal::IRegionEndpoint* GetRegionEndpoint(::StringW regionName);

  /// @brief Method GetUnknownRegionDescription, addr 0x21fb4bc, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW GetUnknownRegionDescription(::StringW regionName);

  /// @brief Method IsRegionInPartition, addr 0x21fb578, size 0x210, virtual false, abstract: false, final false
  static inline bool IsRegionInPartition(::StringW regionName, ::ThirdParty::Json::LitJson::JsonData* partition, ByRef<::StringW> description);

  static inline ::Amazon::Internal::RegionEndpointProviderV3* New_ctor();

  static inline ::Amazon::Internal::RegionEndpointProviderV3* New_ctor(::ThirdParty::Json::LitJson::JsonData* root);

  constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>*& __cordl_internal_get__allRegionEndpoints();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>*> const& __cordl_internal_get__allRegionEndpoints() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __cordl_internal_get__allRegionRegex();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> const& __cordl_internal_get__allRegionRegex() const;

  constexpr ::System::Object*& __cordl_internal_get__allRegionRegexLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__allRegionRegexLock() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::IRegionEndpoint*>*& __cordl_internal_get__nonStandardRegionNameToObjectMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::IRegionEndpoint*>*> const&
  __cordl_internal_get__nonStandardRegionNameToObjectMap() const;

  constexpr ::System::Threading::ReaderWriterLockSlim*& __cordl_internal_get__readerWriterLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterLockSlim*> const& __cordl_internal_get__readerWriterLock() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::IRegionEndpoint*>*& __cordl_internal_get__regionEndpointMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::IRegionEndpoint*>*> const& __cordl_internal_get__regionEndpointMap() const;

  constexpr ::ThirdParty::Json::LitJson::JsonData*& __cordl_internal_get__root();

  constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Json::LitJson::JsonData*> const& __cordl_internal_get__root() const;

  constexpr bool const& __cordl_internal_get_disposedValue() const;

  constexpr bool& __cordl_internal_get_disposedValue();

  constexpr void __cordl_internal_set__allRegionEndpoints(::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>* value);

  constexpr void __cordl_internal_set__allRegionRegex(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  constexpr void __cordl_internal_set__allRegionRegexLock(::System::Object* value);

  constexpr void __cordl_internal_set__nonStandardRegionNameToObjectMap(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::IRegionEndpoint*>* value);

  constexpr void __cordl_internal_set__readerWriterLock(::System::Threading::ReaderWriterLockSlim* value);

  constexpr void __cordl_internal_set__regionEndpointMap(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::IRegionEndpoint*>* value);

  constexpr void __cordl_internal_set__root(::ThirdParty::Json::LitJson::JsonData* value);

  constexpr void __cordl_internal_set_disposedValue(bool value);

  /// @brief Method .ctor, addr 0x21f5780, size 0x3d8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x21f5640, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::ThirdParty::Json::LitJson::JsonData* root);

  static inline ::ThirdParty::Json::LitJson::JsonData* getStaticF__emptyDictionaryJsonData();

  /// @brief Method get_AllRegionEndpoints, addr 0x21fa598, size 0x9ac, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>* get_AllRegionEndpoints();

  /// @brief Method get_AllRegionRegex, addr 0x21faf44, size 0x578, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_AllRegionRegex();

  /// @brief Convert to "::Amazon::Internal::IRegionEndpointProvider"
  constexpr ::Amazon::Internal::IRegionEndpointProvider* i___Amazon__Internal__IRegionEndpointProvider() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF__emptyDictionaryJsonData(::ThirdParty::Json::LitJson::JsonData* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegionEndpointProviderV3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegionEndpointProviderV3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegionEndpointProviderV3(RegionEndpointProviderV3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegionEndpointProviderV3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegionEndpointProviderV3(RegionEndpointProviderV3 const&) = delete;

  /// @brief Field _root, offset: 0x10, size: 0x8, def value: None
  ::ThirdParty::Json::LitJson::JsonData* ____root;

  /// @brief Field _regionEndpointMap, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::IRegionEndpoint*>* ____regionEndpointMap;

  /// @brief Field _nonStandardRegionNameToObjectMap, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::IRegionEndpoint*>* ____nonStandardRegionNameToObjectMap;

  /// @brief Field _readerWriterLock, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::ReaderWriterLockSlim* ____readerWriterLock;

  /// @brief Field _allRegionEndpoints, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>* ____allRegionEndpoints;

  /// @brief Field _allRegionRegexLock, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ____allRegionRegexLock;

  /// @brief Field _allRegionRegex, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::StringW>* ____allRegionRegex;

  /// @brief Field disposedValue, offset: 0x48, size: 0x1, def value: None
  bool ___disposedValue;

  /// @brief Field ENDPOINT_JSON offset 0xffffffff size 0x8
  static constexpr ::ConstString ENDPOINT_JSON{ u"endpoints.json" };

  /// @brief Field ENDPOINT_JSON_RESOURCE offset 0xffffffff size 0x8
  static constexpr ::ConstString ENDPOINT_JSON_RESOURCE{ u"Core.endpoints.json" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Internal::RegionEndpointProviderV3, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Internal::RegionEndpointProviderV3, ____root) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Internal::RegionEndpointProviderV3, ____regionEndpointMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Internal::RegionEndpointProviderV3, ____nonStandardRegionNameToObjectMap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Internal::RegionEndpointProviderV3, ____readerWriterLock) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Internal::RegionEndpointProviderV3, ____allRegionEndpoints) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Internal::RegionEndpointProviderV3, ____allRegionRegexLock) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Internal::RegionEndpointProviderV3, ____allRegionRegex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Internal::RegionEndpointProviderV3, ___disposedValue) == 0x48, "Offset mismatch!");

} // namespace Amazon::Internal
NEED_NO_BOX(::Amazon::Internal::RegionEndpointProviderV3);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Internal::RegionEndpointProviderV3*, "Amazon.Internal", "RegionEndpointProviderV3");
