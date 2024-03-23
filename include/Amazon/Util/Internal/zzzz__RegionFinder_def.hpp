#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegionFinder)
namespace Amazon::Internal {
class IRegionEndpoint;
}
namespace Amazon::Internal {
class RegionEndpointProviderV3;
}
namespace Amazon::Runtime::Internal::Util {
class Logger;
}
namespace Amazon::Util::Internal {
class __RegionFinder__EndpointSegment;
}
namespace Amazon::Util::Internal {
class __RegionFinder____c__DisplayClass14_0;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Amazon::Util::Internal {
class RegionFinder;
}
namespace Amazon::Util::Internal {
class __RegionFinder__EndpointSegment;
}
namespace Amazon::Util::Internal {
class __RegionFinder____c__DisplayClass14_0;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::Internal::RegionFinder);
MARK_REF_PTR_T(::Amazon::Util::Internal::__RegionFinder__EndpointSegment);
MARK_REF_PTR_T(::Amazon::Util::Internal::__RegionFinder____c__DisplayClass14_0);
// Type: ::EndpointSegment
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util::Internal {
// Is value type: false
// CS Name: ::RegionFinder::EndpointSegment*
class CORDL_TYPE __RegionFinder__EndpointSegment : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Children, put = set_Children))::System::Collections::Generic::List_1<::Amazon::Util::Internal::__RegionFinder__EndpointSegment*>* Children;

  __declspec(property(get = get_RegionEndpoint, put = set_RegionEndpoint))::Amazon::Internal::IRegionEndpoint* RegionEndpoint;

  __declspec(property(get = get_UseThisValue, put = set_UseThisValue)) bool UseThisValue;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  /// @brief Field <Children>k__BackingField, offset 0x28, size 0x8
  __declspec(
      property(get = __cordl_internal_get__Children_k__BackingField,
               put = __cordl_internal_set__Children_k__BackingField))::System::Collections::Generic::List_1<::Amazon::Util::Internal::__RegionFinder__EndpointSegment*>* _Children_k__BackingField;

  /// @brief Field <RegionEndpoint>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__RegionEndpoint_k__BackingField,
                      put = __cordl_internal_set__RegionEndpoint_k__BackingField))::Amazon::Internal::IRegionEndpoint* _RegionEndpoint_k__BackingField;

  /// @brief Field <UseThisValue>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__UseThisValue_k__BackingField, put = __cordl_internal_set__UseThisValue_k__BackingField)) bool _UseThisValue_k__BackingField;

  /// @brief Field <Value>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Value_k__BackingField, put = __cordl_internal_set__Value_k__BackingField))::StringW _Value_k__BackingField;

  static inline ::Amazon::Util::Internal::__RegionFinder__EndpointSegment* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::Util::Internal::__RegionFinder__EndpointSegment*>*& __cordl_internal_get__Children_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Util::Internal::__RegionFinder__EndpointSegment*>*> const&
  __cordl_internal_get__Children_k__BackingField() const;

  constexpr ::Amazon::Internal::IRegionEndpoint*& __cordl_internal_get__RegionEndpoint_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Internal::IRegionEndpoint*> const& __cordl_internal_get__RegionEndpoint_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__UseThisValue_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UseThisValue_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Value_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Value_k__BackingField();

  constexpr void __cordl_internal_set__Children_k__BackingField(::System::Collections::Generic::List_1<::Amazon::Util::Internal::__RegionFinder__EndpointSegment*>* value);

  constexpr void __cordl_internal_set__RegionEndpoint_k__BackingField(::Amazon::Internal::IRegionEndpoint* value);

  constexpr void __cordl_internal_set__UseThisValue_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Value_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1fd718c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Children, addr 0x1fd7328, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::Util::Internal::__RegionFinder__EndpointSegment*>* get_Children();

  /// @brief Method get_RegionEndpoint, addr 0x1fd7304, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Internal::IRegionEndpoint* get_RegionEndpoint();

  /// @brief Method get_UseThisValue, addr 0x1fd7314, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseThisValue();

  /// @brief Method get_Value, addr 0x1fd72f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Children, addr 0x1fd7330, size 0x8, virtual false, abstract: false, final false
  inline void set_Children(::System::Collections::Generic::List_1<::Amazon::Util::Internal::__RegionFinder__EndpointSegment*>* value);

  /// @brief Method set_RegionEndpoint, addr 0x1fd730c, size 0x8, virtual false, abstract: false, final false
  inline void set_RegionEndpoint(::Amazon::Internal::IRegionEndpoint* value);

  /// @brief Method set_UseThisValue, addr 0x1fd731c, size 0xc, virtual false, abstract: false, final false
  inline void set_UseThisValue(bool value);

  /// @brief Method set_Value, addr 0x1fd72fc, size 0x8, virtual false, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RegionFinder__EndpointSegment();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RegionFinder__EndpointSegment", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RegionFinder__EndpointSegment(__RegionFinder__EndpointSegment&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RegionFinder__EndpointSegment", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RegionFinder__EndpointSegment(__RegionFinder__EndpointSegment const&) = delete;

  /// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Value_k__BackingField;

  /// @brief Field <RegionEndpoint>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Internal::IRegionEndpoint* ____RegionEndpoint_k__BackingField;

  /// @brief Field <UseThisValue>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____UseThisValue_k__BackingField;

  /// @brief Field <Children>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::Util::Internal::__RegionFinder__EndpointSegment*>* ____Children_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::__RegionFinder__EndpointSegment, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::__RegionFinder__EndpointSegment, ____Value_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::__RegionFinder__EndpointSegment, ____RegionEndpoint_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::__RegionFinder__EndpointSegment, ____UseThisValue_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::__RegionFinder__EndpointSegment, ____Children_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Amazon::Util::Internal
// Type: ::<>c__DisplayClass14_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util::Internal {
// Is value type: false
// CS Name: ::RegionFinder::<>c__DisplayClass14_0*
class CORDL_TYPE __RegionFinder____c__DisplayClass14_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field segment, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_segment, put = __cordl_internal_set_segment))::StringW segment;

  static inline ::Amazon::Util::Internal::__RegionFinder____c__DisplayClass14_0* New_ctor();

  /// @brief Method <FindExactRegion>b__0, addr 0x1fd7338, size 0x28, virtual false, abstract: false, final false
  inline bool _FindExactRegion_b__0(::Amazon::Util::Internal::__RegionFinder__EndpointSegment* endpointSegment);

  constexpr ::StringW const& __cordl_internal_get_segment() const;

  constexpr ::StringW& __cordl_internal_get_segment();

  constexpr void __cordl_internal_set_segment(::StringW value);

  /// @brief Method .ctor, addr 0x1fd7194, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RegionFinder____c__DisplayClass14_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RegionFinder____c__DisplayClass14_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RegionFinder____c__DisplayClass14_0(__RegionFinder____c__DisplayClass14_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RegionFinder____c__DisplayClass14_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RegionFinder____c__DisplayClass14_0(__RegionFinder____c__DisplayClass14_0 const&) = delete;

  /// @brief Field segment, offset: 0x10, size: 0x8, def value: None
  ::StringW ___segment;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::__RegionFinder____c__DisplayClass14_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::__RegionFinder____c__DisplayClass14_0, ___segment) == 0x10, "Offset mismatch!");

} // namespace Amazon::Util::Internal
// Type: Amazon.Util.Internal::RegionFinder
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util::Internal {
// Is value type: false
// CS Name: ::Amazon.Util.Internal::RegionFinder*
class CORDL_TYPE RegionFinder : public ::System::Object {
public:
  // Declarations
  using EndpointSegment = ::Amazon::Util::Internal::__RegionFinder__EndpointSegment;

  using __c__DisplayClass14_0 = ::Amazon::Util::Internal::__RegionFinder____c__DisplayClass14_0;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::Amazon::Util::Internal::RegionFinder* _instance;

  /// @brief Field _logger, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger))::Amazon::Runtime::Internal::Util::Logger* _logger;

  /// @brief Field _regionEndpointProviderV3, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__regionEndpointProviderV3,
                      put = __cordl_internal_set__regionEndpointProviderV3))::Amazon::Internal::RegionEndpointProviderV3* _regionEndpointProviderV3;

  /// @brief Field _regionEndpoints, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__regionEndpoints,
                      put = __cordl_internal_set__regionEndpoints))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::IRegionEndpoint*>* _regionEndpoints;

  /// @brief Field _root, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__root, put = __cordl_internal_set__root))::Amazon::Util::Internal::__RegionFinder__EndpointSegment* _root;

  /// @brief Field disposedValue, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_disposedValue, put = __cordl_internal_set_disposedValue)) bool disposedValue;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method BuildRegionEndpoints, addr 0x1fd5f30, size 0x3d0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::IRegionEndpoint*>* BuildRegionEndpoints();

  /// @brief Method BuildRoot, addr 0x1fd6300, size 0x25c, virtual false, abstract: false, final false
  inline ::Amazon::Util::Internal::__RegionFinder__EndpointSegment* BuildRoot();

  /// @brief Method Dispose, addr 0x1fd7228, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x1fd71f4, size 0x34, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method FindExactRegion, addr 0x1fd6948, size 0xa0, virtual false, abstract: false, final false
  inline ::Amazon::Util::Internal::__RegionFinder__EndpointSegment* FindExactRegion(::StringW endpoint);

  /// @brief Method FindExactRegion, addr 0x1fd6e54, size 0x338, virtual false, abstract: false, final false
  inline ::Amazon::Util::Internal::__RegionFinder__EndpointSegment* FindExactRegion(::System::Collections::Generic::IList_1<::StringW>* segments, int32_t segmentIndex,
                                                                                    ::Amazon::Util::Internal::__RegionFinder__EndpointSegment* currentEndpointSegment);

  /// @brief Method FindFuzzyRegion, addr 0x1fd69e8, size 0x46c, virtual false, abstract: false, final false
  inline ::Amazon::Internal::IRegionEndpoint* FindFuzzyRegion(::StringW endpoint);

  /// @brief Method FindRegion, addr 0x1fd655c, size 0x308, virtual false, abstract: false, final false
  inline ::Amazon::Internal::IRegionEndpoint* FindRegion(::StringW endpoint);

  /// @brief Method GetAuthority, addr 0x1fd6864, size 0xe4, virtual false, abstract: false, final false
  static inline ::StringW GetAuthority(::StringW url);

  static inline ::Amazon::Util::Internal::RegionFinder* New_ctor();

  constexpr ::Amazon::Runtime::Internal::Util::Logger*& __cordl_internal_get__logger();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& __cordl_internal_get__logger() const;

  constexpr ::Amazon::Internal::RegionEndpointProviderV3*& __cordl_internal_get__regionEndpointProviderV3();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Internal::RegionEndpointProviderV3*> const& __cordl_internal_get__regionEndpointProviderV3() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::IRegionEndpoint*>*& __cordl_internal_get__regionEndpoints();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::IRegionEndpoint*>*> const& __cordl_internal_get__regionEndpoints() const;

  constexpr ::Amazon::Util::Internal::__RegionFinder__EndpointSegment*& __cordl_internal_get__root();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::Internal::__RegionFinder__EndpointSegment*> const& __cordl_internal_get__root() const;

  constexpr bool const& __cordl_internal_get_disposedValue() const;

  constexpr bool& __cordl_internal_get_disposedValue();

  constexpr void __cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value);

  constexpr void __cordl_internal_set__regionEndpointProviderV3(::Amazon::Internal::RegionEndpointProviderV3* value);

  constexpr void __cordl_internal_set__regionEndpoints(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::IRegionEndpoint*>* value);

  constexpr void __cordl_internal_set__root(::Amazon::Util::Internal::__RegionFinder__EndpointSegment* value);

  constexpr void __cordl_internal_set_disposedValue(bool value);

  /// @brief Method .ctor, addr 0x1fd5e20, size 0x110, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Util::Internal::RegionFinder* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x1fd719c, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Util::Internal::RegionFinder* get_Instance();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF__instance(::Amazon::Util::Internal::RegionFinder* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegionFinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegionFinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegionFinder(RegionFinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegionFinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegionFinder(RegionFinder const&) = delete;

  /// @brief Field _root, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Util::Internal::__RegionFinder__EndpointSegment* ____root;

  /// @brief Field _logger, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::Logger* ____logger;

  /// @brief Field _regionEndpoints, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::IRegionEndpoint*>* ____regionEndpoints;

  /// @brief Field _regionEndpointProviderV3, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Internal::RegionEndpointProviderV3* ____regionEndpointProviderV3;

  /// @brief Field disposedValue, offset: 0x30, size: 0x1, def value: None
  bool ___disposedValue;

  /// @brief Field DefaultGovRegion offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultGovRegion{ u"us-gov-west-1" };

  /// @brief Field DefaultRegion offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultRegion{ u"us-east-1" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::RegionFinder, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::RegionFinder, ____root) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::RegionFinder, ____logger) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::RegionFinder, ____regionEndpoints) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::RegionFinder, ____regionEndpointProviderV3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::RegionFinder, ___disposedValue) == 0x30, "Offset mismatch!");

} // namespace Amazon::Util::Internal
NEED_NO_BOX(::Amazon::Util::Internal::RegionFinder);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::RegionFinder*, "Amazon.Util.Internal", "RegionFinder");
NEED_NO_BOX(::Amazon::Util::Internal::__RegionFinder__EndpointSegment);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::__RegionFinder__EndpointSegment*, "Amazon.Util.Internal", "RegionFinder/EndpointSegment");
NEED_NO_BOX(::Amazon::Util::Internal::__RegionFinder____c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::__RegionFinder____c__DisplayClass14_0*, "Amazon.Util.Internal", "RegionFinder/<>c__DisplayClass14_0");
