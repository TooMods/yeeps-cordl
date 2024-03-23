#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Auth/zzzz__AbstractAWSSigner_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(S3Signer)
namespace Amazon::Runtime::Internal::Auth {
struct ClientProtocol;
}
namespace Amazon::Runtime::Internal::Auth {
class __S3Signer__RegionDetectionUpdater;
}
namespace Amazon::Runtime::Internal::Auth {
class __S3Signer____c;
}
namespace Amazon::Runtime::Internal::Util {
class RequestMetrics;
}
namespace Amazon::Runtime::Internal {
class IRequest;
}
namespace Amazon::Runtime {
class IClientConfig;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System {
class AsyncCallback;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Auth {
class S3Signer;
}
namespace Amazon::Runtime::Internal::Auth {
class __S3Signer__RegionDetectionUpdater;
}
namespace Amazon::Runtime::Internal::Auth {
class __S3Signer____c;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Auth::S3Signer);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Auth::__S3Signer____c);
// Type: ::RegionDetectionUpdater
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Auth {
// Is value type: false
// CS Name: ::S3Signer::RegionDetectionUpdater*
class CORDL_TYPE __S3Signer__RegionDetectionUpdater : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x25e8ed8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::Amazon::Runtime::Internal::IRequest* request, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x25e8ef8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x25e8ec4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::Amazon::Runtime::Internal::IRequest* request);

  static inline ::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x25e8d98, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __S3Signer__RegionDetectionUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__S3Signer__RegionDetectionUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __S3Signer__RegionDetectionUpdater(__S3Signer__RegionDetectionUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__S3Signer__RegionDetectionUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __S3Signer__RegionDetectionUpdater(__S3Signer__RegionDetectionUpdater const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater, 0x80>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Auth
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Auth {
// Is value type: false
// CS Name: ::S3Signer::<>c*
class CORDL_TYPE __S3Signer____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Runtime::Internal::Auth::__S3Signer____c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0))::System::Func_2<::StringW, ::StringW>* __9__10_0;

  /// @brief Field <>9__13_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__13_0, put = setStaticF___9__13_0))::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>* __9__13_0;

  static inline ::Amazon::Runtime::Internal::Auth::__S3Signer____c* New_ctor();

  /// @brief Method <BuildCanonicalizedHeaders>b__10_0, addr 0x25e8f70, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _BuildCanonicalizedHeaders_b__10_0(::StringW x);

  /// @brief Method <BuildCanonicalizedResource>b__13_0, addr 0x25e8f88, size 0x48, virtual false, abstract: false, final false
  inline int32_t _BuildCanonicalizedResource_b__13_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> firstPair,
                                                     ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> nextPair);

  /// @brief Method .ctor, addr 0x25e8f68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::Internal::Auth::__S3Signer____c* getStaticF___9();

  static inline ::System::Func_2<::StringW, ::StringW>* getStaticF___9__10_0();

  static inline ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>* getStaticF___9__13_0();

  static inline void setStaticF___9(::Amazon::Runtime::Internal::Auth::__S3Signer____c* value);

  static inline void setStaticF___9__10_0(::System::Func_2<::StringW, ::StringW>* value);

  static inline void setStaticF___9__13_0(::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __S3Signer____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__S3Signer____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __S3Signer____c(__S3Signer____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__S3Signer____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __S3Signer____c(__S3Signer____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Auth::__S3Signer____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Auth
// Type: Amazon.Runtime.Internal.Auth::S3Signer
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Auth {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Auth::S3Signer*
class CORDL_TYPE S3Signer : public ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner {
public:
  // Declarations
  using RegionDetectionUpdater = ::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater;

  using __c = ::Amazon::Runtime::Internal::Auth::__S3Signer____c;

  __declspec(property(get = get_Protocol))::Amazon::Runtime::Internal::Auth::ClientProtocol Protocol;

  /// @brief Field SignableParameters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SignableParameters, put = setStaticF_SignableParameters))::System::Collections::Generic::HashSet_1<::StringW>* SignableParameters;

  /// @brief Field SubResourcesSigningExclusion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SubResourcesSigningExclusion,
                             put = setStaticF_SubResourcesSigningExclusion))::System::Collections::Generic::HashSet_1<::StringW>* SubResourcesSigningExclusion;

  /// @brief Field _regionDetector, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__regionDetector, put = __cordl_internal_set__regionDetector))::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater* _regionDetector;

  /// @brief Field _useSigV4, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__useSigV4, put = __cordl_internal_set__useSigV4)) bool _useSigV4;

  /// @brief Method BuildCanonicalizedHeaders, addr 0x25e75b4, size 0x650, virtual false, abstract: false, final false
  static inline ::StringW BuildCanonicalizedHeaders(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers);

  /// @brief Method BuildCanonicalizedResource, addr 0x25e7c04, size 0xe20, virtual false, abstract: false, final false
  static inline ::StringW BuildCanonicalizedResource(::Amazon::Runtime::Internal::IRequest* request);

  /// @brief Method BuildStringToSign, addr 0x25e6ac8, size 0xaec, virtual false, abstract: false, final false
  static inline ::StringW BuildStringToSign(::Amazon::Runtime::Internal::IRequest* request);

  static inline ::Amazon::Runtime::Internal::Auth::S3Signer* New_ctor();

  static inline ::Amazon::Runtime::Internal::Auth::S3Signer* New_ctor(bool useSigV4, ::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater* regionDetector);

  /// @brief Method Sign, addr 0x25e63bc, size 0x328, virtual true, abstract: false, final false
  inline void Sign(::Amazon::Runtime::Internal::IRequest* request, ::Amazon::Runtime::IClientConfig* clientConfig, ::Amazon::Runtime::Internal::Util::RequestMetrics* metrics, ::StringW awsAccessKeyId,
                   ::StringW awsSecretAccessKey);

  /// @brief Method SignRequest, addr 0x25e66e4, size 0x3e4, virtual false, abstract: false, final false
  static inline void SignRequest(::Amazon::Runtime::Internal::IRequest* request, ::Amazon::Runtime::Internal::Util::RequestMetrics* metrics, ::StringW awsAccessKeyId, ::StringW awsSecretAccessKey);

  constexpr ::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater*& __cordl_internal_get__regionDetector();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater*> const& __cordl_internal_get__regionDetector() const;

  constexpr bool const& __cordl_internal_get__useSigV4() const;

  constexpr bool& __cordl_internal_get__useSigV4();

  constexpr void __cordl_internal_set__regionDetector(::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater* value);

  constexpr void __cordl_internal_set__useSigV4(bool value);

  /// @brief Method .ctor, addr 0x25e6360, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x25e6384, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(bool useSigV4, ::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater* regionDetector);

  static inline ::System::Collections::Generic::HashSet_1<::StringW>* getStaticF_SignableParameters();

  static inline ::System::Collections::Generic::HashSet_1<::StringW>* getStaticF_SubResourcesSigningExclusion();

  /// @brief Method get_Protocol, addr 0x25e63b4, size 0x8, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Auth::ClientProtocol get_Protocol();

  static inline void setStaticF_SignableParameters(::System::Collections::Generic::HashSet_1<::StringW>* value);

  static inline void setStaticF_SubResourcesSigningExclusion(::System::Collections::Generic::HashSet_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr S3Signer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "S3Signer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  S3Signer(S3Signer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "S3Signer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  S3Signer(S3Signer const&) = delete;

  /// @brief Field _useSigV4, offset: 0x18, size: 0x1, def value: None
  bool ____useSigV4;

  /// @brief Field _regionDetector, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater* ____regionDetector;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Auth::S3Signer, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Auth::S3Signer, ____useSigV4) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Auth::S3Signer, ____regionDetector) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Auth
NEED_NO_BOX(::Amazon::Runtime::Internal::Auth::S3Signer);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Auth::S3Signer*, "Amazon.Runtime.Internal.Auth", "S3Signer");
NEED_NO_BOX(::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Auth::__S3Signer__RegionDetectionUpdater*, "Amazon.Runtime.Internal.Auth", "S3Signer/RegionDetectionUpdater");
NEED_NO_BOX(::Amazon::Runtime::Internal::Auth::__S3Signer____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Auth::__S3Signer____c*, "Amazon.Runtime.Internal.Auth", "S3Signer/<>c");
